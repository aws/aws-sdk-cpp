﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  /**
   * Container for the result of the StartSupportDataExport operation.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/StartSupportDataExportResult">AWS
   * API Reference</a></p>
   */
  class StartSupportDataExportResult
  {
  public:
    AWS_MARKETPLACECOMMERCEANALYTICS_API StartSupportDataExportResult();
    AWS_MARKETPLACECOMMERCEANALYTICS_API StartSupportDataExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECOMMERCEANALYTICS_API StartSupportDataExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline const Aws::String& GetDataSetRequestId() const{ return m_dataSetRequestId; }

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline void SetDataSetRequestId(const Aws::String& value) { m_dataSetRequestId = value; }

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline void SetDataSetRequestId(Aws::String&& value) { m_dataSetRequestId = std::move(value); }

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline void SetDataSetRequestId(const char* value) { m_dataSetRequestId.assign(value); }

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline StartSupportDataExportResult& WithDataSetRequestId(const Aws::String& value) { SetDataSetRequestId(value); return *this;}

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline StartSupportDataExportResult& WithDataSetRequestId(Aws::String&& value) { SetDataSetRequestId(std::move(value)); return *this;}

    /**
     * A unique identifier representing a specific request to the
     * StartSupportDataExport operation. This identifier can be used to correlate a
     * request with notifications from the SNS topic.
     */
    inline StartSupportDataExportResult& WithDataSetRequestId(const char* value) { SetDataSetRequestId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartSupportDataExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartSupportDataExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartSupportDataExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataSetRequestId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
