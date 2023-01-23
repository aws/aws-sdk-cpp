/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>A JSON-formatted object that contains the IDs for an Amazon Machine Image
   * (AMI), including the Amazon EC2 AMI ID and the Snow device AMI ID. Each AMI has
   * these two IDs to simplify identifying the AMI in both the Amazon Web Services
   * Cloud and on the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Ec2AmiResource">AWS
   * API Reference</a></p>
   */
  class Ec2AmiResource
  {
  public:
    AWS_SNOWBALL_API Ec2AmiResource();
    AWS_SNOWBALL_API Ec2AmiResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Ec2AmiResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline Ec2AmiResource& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline Ec2AmiResource& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI in Amazon EC2.</p>
     */
    inline Ec2AmiResource& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline const Aws::String& GetSnowballAmiId() const{ return m_snowballAmiId; }

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline bool SnowballAmiIdHasBeenSet() const { return m_snowballAmiIdHasBeenSet; }

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline void SetSnowballAmiId(const Aws::String& value) { m_snowballAmiIdHasBeenSet = true; m_snowballAmiId = value; }

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline void SetSnowballAmiId(Aws::String&& value) { m_snowballAmiIdHasBeenSet = true; m_snowballAmiId = std::move(value); }

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline void SetSnowballAmiId(const char* value) { m_snowballAmiIdHasBeenSet = true; m_snowballAmiId.assign(value); }

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline Ec2AmiResource& WithSnowballAmiId(const Aws::String& value) { SetSnowballAmiId(value); return *this;}

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline Ec2AmiResource& WithSnowballAmiId(Aws::String&& value) { SetSnowballAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI on the Snow device.</p>
     */
    inline Ec2AmiResource& WithSnowballAmiId(const char* value) { SetSnowballAmiId(value); return *this;}

  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_snowballAmiId;
    bool m_snowballAmiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
