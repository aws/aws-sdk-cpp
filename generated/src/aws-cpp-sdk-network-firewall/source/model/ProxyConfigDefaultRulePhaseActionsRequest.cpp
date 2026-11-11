/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/ProxyConfigDefaultRulePhaseActionsRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyConfigDefaultRulePhaseActionsRequest::ProxyConfigDefaultRulePhaseActionsRequest(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

ProxyConfigDefaultRulePhaseActionsRequest& ProxyConfigDefaultRulePhaseActionsRequest::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PreDNS") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_preDNS = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_preDNSHasBeenSet = true;
              }

              else if (initialKeyStr == "PreREQUEST") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_preREQUEST = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_preREQUESTHasBeenSet = true;
              }

              else if (initialKeyStr == "PostRESPONSE") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_postRESPONSE = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_postRESPONSEHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProxyConfigDefaultRulePhaseActionsRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PreDNS") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_preDNS = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_preDNSHasBeenSet = true;
            }

            else if (initialKeyStr == "PreREQUEST") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_preREQUEST = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_preREQUESTHasBeenSet = true;
            }

            else if (initialKeyStr == "PostRESPONSE") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_postRESPONSE = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_postRESPONSEHasBeenSet = true;
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

void ProxyConfigDefaultRulePhaseActionsRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_preDNSHasBeenSet) {
    mapSize++;
  }
  if (m_preREQUESTHasBeenSet) {
    mapSize++;
  }
  if (m_postRESPONSEHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_preDNSHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreDNS"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_preDNS).c_str()));
  }

  if (m_preREQUESTHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreREQUEST"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_preREQUEST).c_str()));
  }

  if (m_postRESPONSEHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PostRESPONSE"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_postRESPONSE).c_str()));
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws