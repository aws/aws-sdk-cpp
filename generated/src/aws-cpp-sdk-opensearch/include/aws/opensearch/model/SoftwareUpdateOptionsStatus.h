/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SoftwareUpdateOptions.h>
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
   * <p>The status of the service software options for a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SoftwareUpdateOptionsStatus">AWS
   * API Reference</a></p>
   */
  class SoftwareUpdateOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptionsStatus();
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service software update options for a domain.</p>
     */
    inline const SoftwareUpdateOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The service software update options for a domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The service software update options for a domain.</p>
     */
    inline void SetOptions(const SoftwareUpdateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The service software update options for a domain.</p>
     */
    inline void SetOptions(SoftwareUpdateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The service software update options for a domain.</p>
     */
    inline SoftwareUpdateOptionsStatus& WithOptions(const SoftwareUpdateOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The service software update options for a domain.</p>
     */
    inline SoftwareUpdateOptionsStatus& WithOptions(SoftwareUpdateOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline SoftwareUpdateOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of service software update options, including creation date and
     * last updated date.</p>
     */
    inline SoftwareUpdateOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SoftwareUpdateOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
