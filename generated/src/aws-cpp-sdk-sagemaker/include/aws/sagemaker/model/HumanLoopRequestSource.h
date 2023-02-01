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
    AWS_SAGEMAKER_API HumanLoopRequestSource();
    AWS_SAGEMAKER_API HumanLoopRequestSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanLoopRequestSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline const AwsManagedHumanLoopRequestSource& GetAwsManagedHumanLoopRequestSource() const{ return m_awsManagedHumanLoopRequestSource; }

    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline bool AwsManagedHumanLoopRequestSourceHasBeenSet() const { return m_awsManagedHumanLoopRequestSourceHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline void SetAwsManagedHumanLoopRequestSource(const AwsManagedHumanLoopRequestSource& value) { m_awsManagedHumanLoopRequestSourceHasBeenSet = true; m_awsManagedHumanLoopRequestSource = value; }

    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline void SetAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource&& value) { m_awsManagedHumanLoopRequestSourceHasBeenSet = true; m_awsManagedHumanLoopRequestSource = std::move(value); }

    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline HumanLoopRequestSource& WithAwsManagedHumanLoopRequestSource(const AwsManagedHumanLoopRequestSource& value) { SetAwsManagedHumanLoopRequestSource(value); return *this;}

    /**
     * <p>Specifies whether Amazon Rekognition or Amazon Textract are used as the
     * integration source. The default field settings and JSON parsing rules are
     * different based on the integration source. Valid values:</p>
     */
    inline HumanLoopRequestSource& WithAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource&& value) { SetAwsManagedHumanLoopRequestSource(std::move(value)); return *this;}

  private:

    AwsManagedHumanLoopRequestSource m_awsManagedHumanLoopRequestSource;
    bool m_awsManagedHumanLoopRequestSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
