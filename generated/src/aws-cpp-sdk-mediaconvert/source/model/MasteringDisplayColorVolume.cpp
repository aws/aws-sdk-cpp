/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/MasteringDisplayColorVolume.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

MasteringDisplayColorVolume::MasteringDisplayColorVolume(JsonView jsonValue) { *this = jsonValue; }

MasteringDisplayColorVolume& MasteringDisplayColorVolume::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bluePrimaryX")) {
    m_bluePrimaryX = jsonValue.GetInteger("bluePrimaryX");
    m_bluePrimaryXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bluePrimaryY")) {
    m_bluePrimaryY = jsonValue.GetInteger("bluePrimaryY");
    m_bluePrimaryYHasBeenSet = true;
  }
  if (jsonValue.ValueExists("greenPrimaryX")) {
    m_greenPrimaryX = jsonValue.GetInteger("greenPrimaryX");
    m_greenPrimaryXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("greenPrimaryY")) {
    m_greenPrimaryY = jsonValue.GetInteger("greenPrimaryY");
    m_greenPrimaryYHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxLuminance")) {
    m_maxLuminance = jsonValue.GetInt64("maxLuminance");
    m_maxLuminanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minLuminance")) {
    m_minLuminance = jsonValue.GetInt64("minLuminance");
    m_minLuminanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redPrimaryX")) {
    m_redPrimaryX = jsonValue.GetInteger("redPrimaryX");
    m_redPrimaryXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redPrimaryY")) {
    m_redPrimaryY = jsonValue.GetInteger("redPrimaryY");
    m_redPrimaryYHasBeenSet = true;
  }
  if (jsonValue.ValueExists("whitePointX")) {
    m_whitePointX = jsonValue.GetInteger("whitePointX");
    m_whitePointXHasBeenSet = true;
  }
  if (jsonValue.ValueExists("whitePointY")) {
    m_whitePointY = jsonValue.GetInteger("whitePointY");
    m_whitePointYHasBeenSet = true;
  }
  return *this;
}

JsonValue MasteringDisplayColorVolume::Jsonize() const {
  JsonValue payload;

  if (m_bluePrimaryXHasBeenSet) {
    payload.WithInteger("bluePrimaryX", m_bluePrimaryX);
  }

  if (m_bluePrimaryYHasBeenSet) {
    payload.WithInteger("bluePrimaryY", m_bluePrimaryY);
  }

  if (m_greenPrimaryXHasBeenSet) {
    payload.WithInteger("greenPrimaryX", m_greenPrimaryX);
  }

  if (m_greenPrimaryYHasBeenSet) {
    payload.WithInteger("greenPrimaryY", m_greenPrimaryY);
  }

  if (m_maxLuminanceHasBeenSet) {
    payload.WithInt64("maxLuminance", m_maxLuminance);
  }

  if (m_minLuminanceHasBeenSet) {
    payload.WithInt64("minLuminance", m_minLuminance);
  }

  if (m_redPrimaryXHasBeenSet) {
    payload.WithInteger("redPrimaryX", m_redPrimaryX);
  }

  if (m_redPrimaryYHasBeenSet) {
    payload.WithInteger("redPrimaryY", m_redPrimaryY);
  }

  if (m_whitePointXHasBeenSet) {
    payload.WithInteger("whitePointX", m_whitePointX);
  }

  if (m_whitePointYHasBeenSet) {
    payload.WithInteger("whitePointY", m_whitePointY);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
