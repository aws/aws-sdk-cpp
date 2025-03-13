/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/AwsLambdaTransformation.h>
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
   * <p>A container for AwsLambdaTransformation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaContentTransformation">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaContentTransformation
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaContentTransformation() = default;
    AWS_S3CONTROL_API ObjectLambdaContentTransformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaContentTransformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for an Lambda function.</p>
     */
    inline const AwsLambdaTransformation& GetAwsLambda() const { return m_awsLambda; }
    inline bool AwsLambdaHasBeenSet() const { return m_awsLambdaHasBeenSet; }
    template<typename AwsLambdaT = AwsLambdaTransformation>
    void SetAwsLambda(AwsLambdaT&& value) { m_awsLambdaHasBeenSet = true; m_awsLambda = std::forward<AwsLambdaT>(value); }
    template<typename AwsLambdaT = AwsLambdaTransformation>
    ObjectLambdaContentTransformation& WithAwsLambda(AwsLambdaT&& value) { SetAwsLambda(std::forward<AwsLambdaT>(value)); return *this;}
    ///@}
  private:

    AwsLambdaTransformation m_awsLambda;
    bool m_awsLambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
