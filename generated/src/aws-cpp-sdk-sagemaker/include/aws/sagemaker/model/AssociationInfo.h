/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p> The data type used to describe the relationship between different sources.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociationInfo">AWS
 * API Reference</a></p>
 */
class AssociationInfo {
 public:
  AWS_SAGEMAKER_API AssociationInfo() = default;
  AWS_SAGEMAKER_API AssociationInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AssociationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the <code>AssociationInfo</code> source.
   * </p>
   */
  inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
  inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
  template <typename SourceArnT = Aws::String>
  void SetSourceArn(SourceArnT&& value) {
    m_sourceArnHasBeenSet = true;
    m_sourceArn = std::forward<SourceArnT>(value);
  }
  template <typename SourceArnT = Aws::String>
  AssociationInfo& WithSourceArn(SourceArnT&& value) {
    SetSourceArn(std::forward<SourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the <code>AssociationInfo</code>
   * destination. </p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  AssociationInfo& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceArn;

  Aws::String m_destinationArn;
  bool m_sourceArnHasBeenSet = false;
  bool m_destinationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
