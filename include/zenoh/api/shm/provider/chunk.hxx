//
// Copyright (c) 2023 ZettaScale Technology
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
// which is available at https://www.apache.org/licenses/LICENSE-2.0.
//
// SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
//
// Contributors:
//   ZettaScale Zenoh Team, <zenoh@zettascale.tech>
//
#pragma once

namespace zenoh {

/// @warning This API has been marked as unstable: it works as advertised, but it may be changed in a future release.
/// @brief A ChunkDescriptor.
typedef z_chunk_descriptor_t ChunkDescriptor;

/// @warning This API has been marked as unstable: it works as advertised, but it may be changed in a future release.
/// @brief An AllocatedChunk.
typedef z_allocated_chunk_t AllocatedChunk;

}  // end of namespace zenoh
