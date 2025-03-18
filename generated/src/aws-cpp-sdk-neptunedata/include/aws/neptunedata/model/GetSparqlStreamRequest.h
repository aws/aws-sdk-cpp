/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/model/IteratorType.h>
#include <aws/neptunedata/model/Encoding.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class GetSparqlStreamRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API GetSparqlStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSparqlStream"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_NEPTUNEDATA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the maximum number of records to return. There is also a size limit
     * of 10 MB on the response that can't be modified and that takes precedence over
     * the number of records specified in the <code>limit</code> parameter. The
     * response does include a threshold-breaching record if the 10 MB limit was
     * reached.</p> <p>The range for <code>limit</code> is 1 to 100,000, with a default
     * of 10.</p>
     */
    inline long long GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetSparqlStreamRequest& WithLimit(long long value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be one of:</p> <ul> <li> <p> <code>AT_SEQUENCE_NUMBER</code>   –  
     * Indicates that reading should start from the event sequence number specified
     * jointly by the <code>commitNum</code> and <code>opNum</code> parameters.</p>
     * </li> <li> <p> <code>AFTER_SEQUENCE_NUMBER</code>   –   Indicates that reading
     * should start right after the event sequence number specified jointly by the
     * <code>commitNum</code> and <code>opNum</code> parameters.</p> </li> <li> <p>
     * <code>TRIM_HORIZON</code>   –   Indicates that reading should start at the last
     * untrimmed record in the system, which is the oldest unexpired (not yet deleted)
     * record in the change-log stream.</p> </li> <li> <p> <code>LATEST</code>   –  
     * Indicates that reading should start at the most recent record in the system,
     * which is the latest unexpired (not yet deleted) record in the change-log
     * stream.</p> </li> </ul>
     */
    inline IteratorType GetIteratorType() const { return m_iteratorType; }
    inline bool IteratorTypeHasBeenSet() const { return m_iteratorTypeHasBeenSet; }
    inline void SetIteratorType(IteratorType value) { m_iteratorTypeHasBeenSet = true; m_iteratorType = value; }
    inline GetSparqlStreamRequest& WithIteratorType(IteratorType value) { SetIteratorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit number of the starting record to read from the change-log stream.
     * This parameter is required when <code>iteratorType</code>
     * is<code>AT_SEQUENCE_NUMBER</code> or <code>AFTER_SEQUENCE_NUMBER</code>, and
     * ignored when <code>iteratorType</code> is <code>TRIM_HORIZON</code> or
     * <code>LATEST</code>.</p>
     */
    inline long long GetCommitNum() const { return m_commitNum; }
    inline bool CommitNumHasBeenSet() const { return m_commitNumHasBeenSet; }
    inline void SetCommitNum(long long value) { m_commitNumHasBeenSet = true; m_commitNum = value; }
    inline GetSparqlStreamRequest& WithCommitNum(long long value) { SetCommitNum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation sequence number within the specified commit to start reading
     * from in the change-log stream data. The default is <code>1</code>.</p>
     */
    inline long long GetOpNum() const { return m_opNum; }
    inline bool OpNumHasBeenSet() const { return m_opNumHasBeenSet; }
    inline void SetOpNum(long long value) { m_opNumHasBeenSet = true; m_opNum = value; }
    inline GetSparqlStreamRequest& WithOpNum(long long value) { SetOpNum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to TRUE, Neptune compresses the response using gzip encoding.</p>
     */
    inline Encoding GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(Encoding value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline GetSparqlStreamRequest& WithEncoding(Encoding value) { SetEncoding(value); return *this;}
    ///@}
  private:

    long long m_limit{0};
    bool m_limitHasBeenSet = false;

    IteratorType m_iteratorType{IteratorType::NOT_SET};
    bool m_iteratorTypeHasBeenSet = false;

    long long m_commitNum{0};
    bool m_commitNumHasBeenSet = false;

    long long m_opNum{0};
    bool m_opNumHasBeenSet = false;

    Encoding m_encoding{Encoding::NOT_SET};
    bool m_encodingHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
