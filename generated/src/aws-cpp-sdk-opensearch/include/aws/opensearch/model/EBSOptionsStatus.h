/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/EBSOptions.h>
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
   * <p>The status of the EBS options for the specified OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EBSOptionsStatus">AWS
   * API Reference</a></p>
   */
  class EBSOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API EBSOptionsStatus();
    AWS_OPENSEARCHSERVICE_API EBSOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API EBSOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline const EBSOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline void SetOptions(const EBSOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline void SetOptions(EBSOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithOptions(const EBSOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The configured EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithOptions(EBSOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the EBS options for the specified domain.</p>
     */
    inline EBSOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    EBSOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
