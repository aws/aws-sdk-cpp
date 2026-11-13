/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/RuleGroup.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

RuleGroup::RuleGroup(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleGroup& RuleGroup::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RuleVariables") {
                m_ruleVariables = RuleVariables(decoder);
                m_ruleVariablesHasBeenSet = true;
              }

              else if (initialKeyStr == "ReferenceSets") {
                m_referenceSets = ReferenceSets(decoder);
                m_referenceSetsHasBeenSet = true;
              }

              else if (initialKeyStr == "RulesSource") {
                m_rulesSource = RulesSource(decoder);
                m_rulesSourceHasBeenSet = true;
              }

              else if (initialKeyStr == "StatefulRuleOptions") {
                m_statefulRuleOptions = StatefulRuleOptions(decoder);
                m_statefulRuleOptionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleGroup", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RuleVariables") {
              m_ruleVariables = RuleVariables(decoder);
              m_ruleVariablesHasBeenSet = true;
            }

            else if (initialKeyStr == "ReferenceSets") {
              m_referenceSets = ReferenceSets(decoder);
              m_referenceSetsHasBeenSet = true;
            }

            else if (initialKeyStr == "RulesSource") {
              m_rulesSource = RulesSource(decoder);
              m_rulesSourceHasBeenSet = true;
            }

            else if (initialKeyStr == "StatefulRuleOptions") {
              m_statefulRuleOptions = StatefulRuleOptions(decoder);
              m_statefulRuleOptionsHasBeenSet = true;
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

void RuleGroup::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleVariablesHasBeenSet) {
    mapSize++;
  }
  if (m_referenceSetsHasBeenSet) {
    mapSize++;
  }
  if (m_rulesSourceHasBeenSet) {
    mapSize++;
  }
  if (m_statefulRuleOptionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleVariablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleVariables"));
    m_ruleVariables.CborEncode(encoder);
  }

  if (m_referenceSetsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReferenceSets"));
    m_referenceSets.CborEncode(encoder);
  }

  if (m_rulesSourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RulesSource"));
    m_rulesSource.CborEncode(encoder);
  }

  if (m_statefulRuleOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatefulRuleOptions"));
    m_statefulRuleOptions.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws