/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AwsManagedHumanLoopRequestSource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for configuring the source of human task requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopRequestSource">AWS
   * API Reference</a></p>
   */
  class HumanLoopRequestSource
  {
  public:
    AWS_SAGEMAKER_API HumanLoopRequestSource() = default;
    AWS_SAGEMAKER_API HumanLoopRequestSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanLoopRequestSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline AwsManagedHumanLoopRequestSource GetAwsManagedHumanLoopRequestSource() const { return m_awsManagedHumanLoopRequestSource; }
    inline bool AwsManagedHumanLoopRequestSourceHasBeenSet() const { return m_awsManagedHumanLoopRequestSourceHasBeenSet; }
    inline void SetAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource value) { m_awsManagedHumanLoopRequestSourceHasBeenSet = true; m_awsManagedHumanLoopRequestSource = value; }
    inline HumanLoopRequestSource& WithAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource value) { SetAwsManagedHumanLoopRequestSource(value); return *this;}
    ///@}
  private:

    AwsManagedHumanLoopRequestSource m_awsManagedHumanLoopRequestSource{AwsManagedHumanLoopRequestSource::NOT_SET};
    bool m_awsManagedHumanLoopRequestSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
