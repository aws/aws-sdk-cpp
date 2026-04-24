/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AssociationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AssociationInfo::AssociationInfo(JsonView jsonValue) { *this = jsonValue; }

AssociationInfo& AssociationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceArn")) {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationArn")) {
    m_destinationArn = jsonValue.GetString("DestinationArn");
    m_destinationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociationInfo::Jsonize() const {
  JsonValue payload;

  if (m_sourceArnHasBeenSet) {
    payload.WithString("SourceArn", m_sourceArn);
  }

  if (m_destinationArnHasBeenSet) {
    payload.WithString("DestinationArn", m_destinationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
