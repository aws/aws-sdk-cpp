﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeArchive.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>DescribeTapeArchivesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeArchivesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTapeArchivesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult();
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description, and tape
     * barcode.</p>
     */
    inline const Aws::Vector<TapeArchive>& GetTapeArchives() const{ return m_tapeArchives; }
    inline void SetTapeArchives(const Aws::Vector<TapeArchive>& value) { m_tapeArchives = value; }
    inline void SetTapeArchives(Aws::Vector<TapeArchive>&& value) { m_tapeArchives = std::move(value); }
    inline DescribeTapeArchivesResult& WithTapeArchives(const Aws::Vector<TapeArchive>& value) { SetTapeArchives(value); return *this;}
    inline DescribeTapeArchivesResult& WithTapeArchives(Aws::Vector<TapeArchive>&& value) { SetTapeArchives(std::move(value)); return *this;}
    inline DescribeTapeArchivesResult& AddTapeArchives(const TapeArchive& value) { m_tapeArchives.push_back(value); return *this; }
    inline DescribeTapeArchivesResult& AddTapeArchives(TapeArchive&& value) { m_tapeArchives.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeTapeArchivesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeTapeArchivesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeTapeArchivesResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTapeArchivesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTapeArchivesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTapeArchivesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TapeArchive> m_tapeArchives;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
