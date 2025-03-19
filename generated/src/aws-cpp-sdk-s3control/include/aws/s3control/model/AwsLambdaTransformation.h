/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Lambda function used to transform objects through an Object Lambda Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AwsLambdaTransformation">AWS
   * API Reference</a></p>
   */
  class AwsLambdaTransformation
  {
  public:
    AWS_S3CONTROL_API AwsLambdaTransformation() = default;
    AWS_S3CONTROL_API AwsLambdaTransformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AwsLambdaTransformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    AwsLambdaTransformation& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional JSON that provides supplemental data to the Lambda function used
     * to transform objects.</p>
     */
    inline const Aws::String& GetFunctionPayload() const { return m_functionPayload; }
    inline bool FunctionPayloadHasBeenSet() const { return m_functionPayloadHasBeenSet; }
    template<typename FunctionPayloadT = Aws::String>
    void SetFunctionPayload(FunctionPayloadT&& value) { m_functionPayloadHasBeenSet = true; m_functionPayload = std::forward<FunctionPayloadT>(value); }
    template<typename FunctionPayloadT = Aws::String>
    AwsLambdaTransformation& WithFunctionPayload(FunctionPayloadT&& value) { SetFunctionPayload(std::forward<FunctionPayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_functionPayload;
    bool m_functionPayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
