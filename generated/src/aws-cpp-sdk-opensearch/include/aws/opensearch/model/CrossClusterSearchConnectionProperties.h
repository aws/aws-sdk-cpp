/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SkipUnavailableStatus.h>
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
   * <p>Cross-cluster search specific connection properties.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CrossClusterSearchConnectionProperties">AWS
   * API Reference</a></p>
   */
  class CrossClusterSearchConnectionProperties
  {
  public:
    AWS_OPENSEARCHSERVICE_API CrossClusterSearchConnectionProperties();
    AWS_OPENSEARCHSERVICE_API CrossClusterSearchConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CrossClusterSearchConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline const SkipUnavailableStatus& GetSkipUnavailable() const{ return m_skipUnavailable; }

    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline bool SkipUnavailableHasBeenSet() const { return m_skipUnavailableHasBeenSet; }

    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline void SetSkipUnavailable(const SkipUnavailableStatus& value) { m_skipUnavailableHasBeenSet = true; m_skipUnavailable = value; }

    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline void SetSkipUnavailable(SkipUnavailableStatus&& value) { m_skipUnavailableHasBeenSet = true; m_skipUnavailable = std::move(value); }

    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline CrossClusterSearchConnectionProperties& WithSkipUnavailable(const SkipUnavailableStatus& value) { SetSkipUnavailable(value); return *this;}

    /**
     * <p>The status of the <code>SkipUnavailable</code> setting for the outbound
     * connection. This feature allows you to specify some clusters as optional and
     * ensure that your cross-cluster queries return partial results despite failures
     * on one or more remote clusters.</p>
     */
    inline CrossClusterSearchConnectionProperties& WithSkipUnavailable(SkipUnavailableStatus&& value) { SetSkipUnavailable(std::move(value)); return *this;}

  private:

    SkipUnavailableStatus m_skipUnavailable;
    bool m_skipUnavailableHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
