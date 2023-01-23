/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HealthCheck.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a <code>ListHealthChecks</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthChecksResponse">AWS
   * API Reference</a></p>
   */
  class ListHealthChecksResult
  {
  public:
    AWS_ROUTE53_API ListHealthChecksResult();
    AWS_ROUTE53_API ListHealthChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHealthChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<HealthCheck>& GetHealthChecks() const{ return m_healthChecks; }

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline void SetHealthChecks(const Aws::Vector<HealthCheck>& value) { m_healthChecks = value; }

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline void SetHealthChecks(Aws::Vector<HealthCheck>&& value) { m_healthChecks = std::move(value); }

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListHealthChecksResult& WithHealthChecks(const Aws::Vector<HealthCheck>& value) { SetHealthChecks(value); return *this;}

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListHealthChecksResult& WithHealthChecks(Aws::Vector<HealthCheck>&& value) { SetHealthChecks(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListHealthChecksResult& AddHealthChecks(const HealthCheck& value) { m_healthChecks.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListHealthChecksResult& AddHealthChecks(HealthCheck&& value) { m_healthChecks.push_back(std::move(value)); return *this; }


    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline ListHealthChecksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline ListHealthChecksResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline ListHealthChecksResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A flag that indicates whether there are more health checks to be listed. If
     * the response was truncated, you can get the next group of health checks by
     * submitting another <code>ListHealthChecks</code> request and specifying the
     * value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more health checks to be listed. If
     * the response was truncated, you can get the next group of health checks by
     * submitting another <code>ListHealthChecks</code> request and specifying the
     * value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more health checks to be listed. If
     * the response was truncated, you can get the next group of health checks by
     * submitting another <code>ListHealthChecks</code> request and specifying the
     * value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListHealthChecksResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline ListHealthChecksResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline ListHealthChecksResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::Vector<HealthCheck> m_healthChecks;

    Aws::String m_marker;

    bool m_isTruncated;

    Aws::String m_nextMarker;

    Aws::String m_maxItems;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
