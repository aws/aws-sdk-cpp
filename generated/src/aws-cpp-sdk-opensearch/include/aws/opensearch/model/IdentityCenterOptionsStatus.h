/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/IdentityCenterOptions.h>
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
   * <p>The status of IAM Identity Center Options settings for a
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IdentityCenterOptionsStatus">AWS
   * API Reference</a></p>
   */
  class IdentityCenterOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsStatus();
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Container for IAM Identity Center Options settings.</p>
     */
    inline const IdentityCenterOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const IdentityCenterOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(IdentityCenterOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline IdentityCenterOptionsStatus& WithOptions(const IdentityCenterOptions& value) { SetOptions(value); return *this;}
    inline IdentityCenterOptionsStatus& WithOptions(IdentityCenterOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of IAM Identity Center Options settings for a domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IdentityCenterOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline IdentityCenterOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    IdentityCenterOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
