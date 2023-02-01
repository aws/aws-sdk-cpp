/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricStreamEntry.h>
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
namespace CloudWatch
{
namespace Model
{
  class ListMetricStreamsResult
  {
  public:
    AWS_CLOUDWATCH_API ListMetricStreamsResult();
    AWS_CLOUDWATCH_API ListMetricStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListMetricStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline ListMetricStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline ListMetricStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results. You can
     * use this token in a subsequent operation to get the next batch of results.</p>
     */
    inline ListMetricStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The array of metric stream information.</p>
     */
    inline const Aws::Vector<MetricStreamEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The array of metric stream information.</p>
     */
    inline void SetEntries(const Aws::Vector<MetricStreamEntry>& value) { m_entries = value; }

    /**
     * <p>The array of metric stream information.</p>
     */
    inline void SetEntries(Aws::Vector<MetricStreamEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>The array of metric stream information.</p>
     */
    inline ListMetricStreamsResult& WithEntries(const Aws::Vector<MetricStreamEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The array of metric stream information.</p>
     */
    inline ListMetricStreamsResult& WithEntries(Aws::Vector<MetricStreamEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The array of metric stream information.</p>
     */
    inline ListMetricStreamsResult& AddEntries(const MetricStreamEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>The array of metric stream information.</p>
     */
    inline ListMetricStreamsResult& AddEntries(MetricStreamEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListMetricStreamsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListMetricStreamsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MetricStreamEntry> m_entries;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
