/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/Cluster.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MemoryDB {
namespace Model {

Cluster::Cluster(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Cluster& Cluster::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "Status") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_status = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_status = ss.str();
                  }
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "PendingUpdates") {
                m_pendingUpdates = ClusterPendingUpdates(decoder);
                m_pendingUpdatesHasBeenSet = true;
              }

              else if (initialKeyStr == "MultiRegionClusterName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_multiRegionClusterName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_multiRegionClusterName = ss.str();
                  }
                }
                m_multiRegionClusterNameHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfShards") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfShards = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfShards = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfShardsHasBeenSet = true;
              }

              else if (initialKeyStr == "Shards") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_shards.push_back(Shard(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_shards.push_back(Shard(decoder));
                    }
                  }
                }
                m_shardsHasBeenSet = true;
              }

              else if (initialKeyStr == "AvailabilityMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_availabilityMode =
                      AZStatusMapper::GetAZStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_availabilityModeHasBeenSet = true;
              }

              else if (initialKeyStr == "ClusterEndpoint") {
                m_clusterEndpoint = Endpoint(decoder);
                m_clusterEndpointHasBeenSet = true;
              }

              else if (initialKeyStr == "NodeType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_nodeType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_nodeType = ss.str();
                  }
                }
                m_nodeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Engine") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_engine = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_engine = ss.str();
                  }
                }
                m_engineHasBeenSet = true;
              }

              else if (initialKeyStr == "EngineVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_engineVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_engineVersion = ss.str();
                  }
                }
                m_engineVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "EnginePatchVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_enginePatchVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_enginePatchVersion = ss.str();
                  }
                }
                m_enginePatchVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "ParameterGroupName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_parameterGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_parameterGroupName = ss.str();
                  }
                }
                m_parameterGroupNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ParameterGroupStatus") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_parameterGroupStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_parameterGroupStatus = ss.str();
                  }
                }
                m_parameterGroupStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityGroups") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_securityGroups.push_back(SecurityGroupMembership(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_securityGroups.push_back(SecurityGroupMembership(decoder));
                    }
                  }
                }
                m_securityGroupsHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetGroupName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_subnetGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_subnetGroupName = ss.str();
                  }
                }
                m_subnetGroupNameHasBeenSet = true;
              }

              else if (initialKeyStr == "TLSEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_tLSEnabled = val.value();
                }
                m_tLSEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "KmsKeyId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_kmsKeyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_kmsKeyId = ss.str();
                  }
                }
                m_kmsKeyIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ARN") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_aRN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_aRN = ss.str();
                  }
                }
                m_aRNHasBeenSet = true;
              }

              else if (initialKeyStr == "SnsTopicArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_snsTopicArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_snsTopicArn = ss.str();
                  }
                }
                m_snsTopicArnHasBeenSet = true;
              }

              else if (initialKeyStr == "SnsTopicStatus") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_snsTopicStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_snsTopicStatus = ss.str();
                  }
                }
                m_snsTopicStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "SnapshotRetentionLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_snapshotRetentionLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_snapshotRetentionLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_snapshotRetentionLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "MaintenanceWindow") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_maintenanceWindow = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_maintenanceWindow = ss.str();
                  }
                }
                m_maintenanceWindowHasBeenSet = true;
              }

              else if (initialKeyStr == "SnapshotWindow") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_snapshotWindow = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_snapshotWindow = ss.str();
                  }
                }
                m_snapshotWindowHasBeenSet = true;
              }

              else if (initialKeyStr == "ACLName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_aCLName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_aCLName = ss.str();
                  }
                }
                m_aCLNameHasBeenSet = true;
              }

              else if (initialKeyStr == "AutoMinorVersionUpgrade") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_autoMinorVersionUpgrade = val.value();
                }
                m_autoMinorVersionUpgradeHasBeenSet = true;
              }

              else if (initialKeyStr == "DataTiering") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_dataTieringHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_networkType = NetworkTypeMapper::GetNetworkTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_networkTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "IpDiscovery") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_ipDiscovery = IpDiscoveryMapper::GetIpDiscoveryForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_ipDiscoveryHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Cluster", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "Status") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_status = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_status = ss.str();
                }
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "PendingUpdates") {
              m_pendingUpdates = ClusterPendingUpdates(decoder);
              m_pendingUpdatesHasBeenSet = true;
            }

            else if (initialKeyStr == "MultiRegionClusterName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_multiRegionClusterName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_multiRegionClusterName = ss.str();
                }
              }
              m_multiRegionClusterNameHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfShards") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfShards = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfShards = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfShardsHasBeenSet = true;
            }

            else if (initialKeyStr == "Shards") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_shards.push_back(Shard(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_shards.push_back(Shard(decoder));
                  }
                }
              }
              m_shardsHasBeenSet = true;
            }

            else if (initialKeyStr == "AvailabilityMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_availabilityMode =
                    AZStatusMapper::GetAZStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_availabilityModeHasBeenSet = true;
            }

            else if (initialKeyStr == "ClusterEndpoint") {
              m_clusterEndpoint = Endpoint(decoder);
              m_clusterEndpointHasBeenSet = true;
            }

            else if (initialKeyStr == "NodeType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_nodeType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_nodeType = ss.str();
                }
              }
              m_nodeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Engine") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_engine = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_engine = ss.str();
                }
              }
              m_engineHasBeenSet = true;
            }

            else if (initialKeyStr == "EngineVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_engineVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_engineVersion = ss.str();
                }
              }
              m_engineVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "EnginePatchVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_enginePatchVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_enginePatchVersion = ss.str();
                }
              }
              m_enginePatchVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "ParameterGroupName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_parameterGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_parameterGroupName = ss.str();
                }
              }
              m_parameterGroupNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ParameterGroupStatus") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_parameterGroupStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_parameterGroupStatus = ss.str();
                }
              }
              m_parameterGroupStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityGroups") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_securityGroups.push_back(SecurityGroupMembership(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_securityGroups.push_back(SecurityGroupMembership(decoder));
                  }
                }
              }
              m_securityGroupsHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetGroupName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_subnetGroupName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_subnetGroupName = ss.str();
                }
              }
              m_subnetGroupNameHasBeenSet = true;
            }

            else if (initialKeyStr == "TLSEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_tLSEnabled = val.value();
              }
              m_tLSEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "KmsKeyId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_kmsKeyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_kmsKeyId = ss.str();
                }
              }
              m_kmsKeyIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ARN") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_aRN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_aRN = ss.str();
                }
              }
              m_aRNHasBeenSet = true;
            }

            else if (initialKeyStr == "SnsTopicArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_snsTopicArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_snsTopicArn = ss.str();
                }
              }
              m_snsTopicArnHasBeenSet = true;
            }

            else if (initialKeyStr == "SnsTopicStatus") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_snsTopicStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_snsTopicStatus = ss.str();
                }
              }
              m_snsTopicStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "SnapshotRetentionLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_snapshotRetentionLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_snapshotRetentionLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_snapshotRetentionLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "MaintenanceWindow") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_maintenanceWindow = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_maintenanceWindow = ss.str();
                }
              }
              m_maintenanceWindowHasBeenSet = true;
            }

            else if (initialKeyStr == "SnapshotWindow") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_snapshotWindow = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_snapshotWindow = ss.str();
                }
              }
              m_snapshotWindowHasBeenSet = true;
            }

            else if (initialKeyStr == "ACLName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_aCLName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_aCLName = ss.str();
                }
              }
              m_aCLNameHasBeenSet = true;
            }

            else if (initialKeyStr == "AutoMinorVersionUpgrade") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_autoMinorVersionUpgrade = val.value();
              }
              m_autoMinorVersionUpgradeHasBeenSet = true;
            }

            else if (initialKeyStr == "DataTiering") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_dataTiering = DataTieringStatusMapper::GetDataTieringStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_dataTieringHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_networkType =
                    NetworkTypeMapper::GetNetworkTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_networkTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "IpDiscovery") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_ipDiscovery =
                    IpDiscoveryMapper::GetIpDiscoveryForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_ipDiscoveryHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void Cluster::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_pendingUpdatesHasBeenSet) {
    mapSize++;
  }
  if (m_multiRegionClusterNameHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfShardsHasBeenSet) {
    mapSize++;
  }
  if (m_shardsHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityModeHasBeenSet) {
    mapSize++;
  }
  if (m_clusterEndpointHasBeenSet) {
    mapSize++;
  }
  if (m_nodeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_engineHasBeenSet) {
    mapSize++;
  }
  if (m_engineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_enginePatchVersionHasBeenSet) {
    mapSize++;
  }
  if (m_parameterGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_parameterGroupStatusHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_subnetGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_tLSEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_aRNHasBeenSet) {
    mapSize++;
  }
  if (m_snsTopicArnHasBeenSet) {
    mapSize++;
  }
  if (m_snsTopicStatusHasBeenSet) {
    mapSize++;
  }
  if (m_snapshotRetentionLimitHasBeenSet) {
    mapSize++;
  }
  if (m_maintenanceWindowHasBeenSet) {
    mapSize++;
  }
  if (m_snapshotWindowHasBeenSet) {
    mapSize++;
  }
  if (m_aCLNameHasBeenSet) {
    mapSize++;
  }
  if (m_autoMinorVersionUpgradeHasBeenSet) {
    mapSize++;
  }
  if (m_dataTieringHasBeenSet) {
    mapSize++;
  }
  if (m_networkTypeHasBeenSet) {
    mapSize++;
  }
  if (m_ipDiscoveryHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_status.c_str()));
  }

  if (m_pendingUpdatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PendingUpdates"));
    m_pendingUpdates.CborEncode(encoder);
  }

  if (m_multiRegionClusterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MultiRegionClusterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_multiRegionClusterName.c_str()));
  }

  if (m_numberOfShardsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfShards"));
    (m_numberOfShards >= 0) ? encoder.WriteUInt(m_numberOfShards) : encoder.WriteNegInt(m_numberOfShards);
  }

  if (m_shardsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Shards"));
    encoder.WriteArrayStart(m_shards.size());
    for (const auto& item_0 : m_shards) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_availabilityModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AZStatusMapper::GetNameForAZStatus(m_availabilityMode).c_str()));
  }

  if (m_clusterEndpointHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterEndpoint"));
    m_clusterEndpoint.CborEncode(encoder);
  }

  if (m_nodeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeType.c_str()));
  }

  if (m_engineHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Engine"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engine.c_str()));
  }

  if (m_engineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EngineVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engineVersion.c_str()));
  }

  if (m_enginePatchVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnginePatchVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_enginePatchVersion.c_str()));
  }

  if (m_parameterGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParameterGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_parameterGroupName.c_str()));
  }

  if (m_parameterGroupStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParameterGroupStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_parameterGroupStatus.c_str()));
  }

  if (m_securityGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroups"));
    encoder.WriteArrayStart(m_securityGroups.size());
    for (const auto& item_0 : m_securityGroups) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_subnetGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subnetGroupName.c_str()));
  }

  if (m_tLSEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSEnabled"));
    encoder.WriteBool(m_tLSEnabled);
  }

  if (m_kmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyId.c_str()));
  }

  if (m_aRNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_aRN.c_str()));
  }

  if (m_snsTopicArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnsTopicArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snsTopicArn.c_str()));
  }

  if (m_snsTopicStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnsTopicStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snsTopicStatus.c_str()));
  }

  if (m_snapshotRetentionLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnapshotRetentionLimit"));
    (m_snapshotRetentionLimit >= 0) ? encoder.WriteUInt(m_snapshotRetentionLimit) : encoder.WriteNegInt(m_snapshotRetentionLimit);
  }

  if (m_maintenanceWindowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaintenanceWindow"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_maintenanceWindow.c_str()));
  }

  if (m_snapshotWindowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnapshotWindow"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snapshotWindow.c_str()));
  }

  if (m_aCLNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ACLName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_aCLName.c_str()));
  }

  if (m_autoMinorVersionUpgradeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoMinorVersionUpgrade"));
    encoder.WriteBool(m_autoMinorVersionUpgrade);
  }

  if (m_dataTieringHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataTiering"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DataTieringStatusMapper::GetNameForDataTieringStatus(m_dataTiering).c_str()));
  }

  if (m_networkTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NetworkTypeMapper::GetNameForNetworkType(m_networkType).c_str()));
  }

  if (m_ipDiscoveryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpDiscovery"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery).c_str()));
  }
}

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws