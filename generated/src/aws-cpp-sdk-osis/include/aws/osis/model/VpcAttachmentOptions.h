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
    AWS_OSIS_API VpcAttachmentOptions() = default;
    AWS_OSIS_API VpcAttachmentOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API VpcAttachmentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether a VPC is attached to the pipeline.</p>
     */
    inline bool GetAttachToVpc() const { return m_attachToVpc; }
    inline bool AttachToVpcHasBeenSet() const { return m_attachToVpcHasBeenSet; }
    inline void SetAttachToVpc(bool value) { m_attachToVpcHasBeenSet = true; m_attachToVpc = value; }
    inline VpcAttachmentOptions& WithAttachToVpc(bool value) { SetAttachToVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR block to be reserved for OpenSearch Ingestion to create elastic
     * network interfaces (ENIs).</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    VpcAttachmentOptions& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}
  private:

    bool m_attachToVpc{false};
    bool m_attachToVpcHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
