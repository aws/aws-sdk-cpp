/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VPCDerivedInfo.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Status of the VPC options for a specified domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/VPCDerivedInfoStatus">AWS
   * API Reference</a></p>
   */
  class VPCDerivedInfoStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfoStatus();
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfoStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API VPCDerivedInfoStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline const VPCDerivedInfo& GetOptions() const{ return m_options; }

    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline void SetOptions(const VPCDerivedInfo& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline void SetOptions(VPCDerivedInfo&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline VPCDerivedInfoStatus& WithOptions(const VPCDerivedInfo& value) { SetOptions(value); return *this;}

    /**
     * <p>The VPC options for the specified domain.</p>
     */
    inline VPCDerivedInfoStatus& WithOptions(VPCDerivedInfo&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline VPCDerivedInfoStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC options for the specified domain.</p>
     */
    inline VPCDerivedInfoStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VPCDerivedInfo m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
