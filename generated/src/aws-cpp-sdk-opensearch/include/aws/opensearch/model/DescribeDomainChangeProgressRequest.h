/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>DescribeDomainChangeProgress</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainChangeProgressRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDomainChangeProgressRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainChangeProgress"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain to get progress information for.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}

    /**
     * <p>The specific change ID for which you want to get progress information. If
     * omitted, the request returns information about the most recent configuration
     * change.</p>
     */
    inline DescribeDomainChangeProgressRequest& WithChangeId(const char* value) { SetChangeId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
