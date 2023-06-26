/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SnapshotOptions.h>
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
   * <p>Container for information about a daily automated snapshot for an OpenSearch
   * Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SnapshotOptionsStatus">AWS
   * API Reference</a></p>
   */
  class SnapshotOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API SnapshotOptionsStatus();
    AWS_OPENSEARCHSERVICE_API SnapshotOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SnapshotOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline const SnapshotOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline void SetOptions(const SnapshotOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline void SetOptions(SnapshotOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline SnapshotOptionsStatus& WithOptions(const SnapshotOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The daily snapshot options specified for the domain.</p>
     */
    inline SnapshotOptionsStatus& WithOptions(SnapshotOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline SnapshotOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a daily automated snapshot.</p>
     */
    inline SnapshotOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SnapshotOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
