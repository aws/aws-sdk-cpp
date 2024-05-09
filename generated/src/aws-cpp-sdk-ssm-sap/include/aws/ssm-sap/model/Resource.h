/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The resource contains a <code>ResourceArn</code> and the
   * <code>ResourceType</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_SSMSAP_API Resource();
    AWS_SSMSAP_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline Resource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline Resource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p> <p>Example of
     * <code>ResourceArn</code>:
     * "<code>arn:aws:ec2:us-east-1:111111111111:instance/i-abcdefgh987654321</code>"</p>
     */
    inline Resource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p> <p>Example of <code>ResourceType</code>:
     * "<code>AWS::SystemsManagerSAP::Component</code>" or
     * "<code>AWS::EC2::Instance</code>".</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
