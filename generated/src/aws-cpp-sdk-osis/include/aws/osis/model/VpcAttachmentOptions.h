/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Options for attaching a VPC to pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/VpcAttachmentOptions">AWS
   * API Reference</a></p>
   */
  class VpcAttachmentOptions
  {
  public:
    AWS_OSIS_API VpcAttachmentOptions();
    AWS_OSIS_API VpcAttachmentOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcAttachmentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether a VPC is attached to the pipeline.</p>
     */
    inline bool GetAttachToVpc() const{ return m_attachToVpc; }
    inline bool AttachToVpcHasBeenSet() const { return m_attachToVpcHasBeenSet; }
    inline void SetAttachToVpc(bool value) { m_attachToVpcHasBeenSet = true; m_attachToVpc = value; }
    inline VpcAttachmentOptions& WithAttachToVpc(bool value) { SetAttachToVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR block to be reserved for OpenSearch Ingestion to create elastic
     * network interfaces (ENIs).</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline VpcAttachmentOptions& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline VpcAttachmentOptions& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline VpcAttachmentOptions& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}
  private:

    bool m_attachToVpc;
    bool m_attachToVpcHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
