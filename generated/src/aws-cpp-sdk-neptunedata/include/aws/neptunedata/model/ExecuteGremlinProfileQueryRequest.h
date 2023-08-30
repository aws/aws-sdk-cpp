/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ExecuteGremlinProfileQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteGremlinProfileQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline const Aws::String& GetGremlinQuery() const{ return m_gremlinQuery; }

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline bool GremlinQueryHasBeenSet() const { return m_gremlinQueryHasBeenSet; }

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline void SetGremlinQuery(const Aws::String& value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery = value; }

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline void SetGremlinQuery(Aws::String&& value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery = std::move(value); }

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline void SetGremlinQuery(const char* value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery.assign(value); }

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithGremlinQuery(const Aws::String& value) { SetGremlinQuery(value); return *this;}

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithGremlinQuery(Aws::String&& value) { SetGremlinQuery(std::move(value)); return *this;}

    /**
     * <p>The Gremlin query string to profile.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithGremlinQuery(const char* value) { SetGremlinQuery(value); return *this;}


    /**
     * <p>If this flag is set to <code>TRUE</code>, the query results are gathered and
     * displayed as part of the profile report. If <code>FALSE</code>, only the result
     * count is displayed.</p>
     */
    inline bool GetResults() const{ return m_results; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the query results are gathered and
     * displayed as part of the profile report. If <code>FALSE</code>, only the result
     * count is displayed.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the query results are gathered and
     * displayed as part of the profile report. If <code>FALSE</code>, only the result
     * count is displayed.</p>
     */
    inline void SetResults(bool value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the query results are gathered and
     * displayed as part of the profile report. If <code>FALSE</code>, only the result
     * count is displayed.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithResults(bool value) { SetResults(value); return *this;}


    /**
     * <p>If non-zero, causes the results string to be truncated at that number of
     * characters. If set to zero, the string contains all the results.</p>
     */
    inline int GetChop() const{ return m_chop; }

    /**
     * <p>If non-zero, causes the results string to be truncated at that number of
     * characters. If set to zero, the string contains all the results.</p>
     */
    inline bool ChopHasBeenSet() const { return m_chopHasBeenSet; }

    /**
     * <p>If non-zero, causes the results string to be truncated at that number of
     * characters. If set to zero, the string contains all the results.</p>
     */
    inline void SetChop(int value) { m_chopHasBeenSet = true; m_chop = value; }

    /**
     * <p>If non-zero, causes the results string to be truncated at that number of
     * characters. If set to zero, the string contains all the results.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithChop(int value) { SetChop(value); return *this;}


    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline const Aws::String& GetSerializer() const{ return m_serializer; }

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline bool SerializerHasBeenSet() const { return m_serializerHasBeenSet; }

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline void SetSerializer(const Aws::String& value) { m_serializerHasBeenSet = true; m_serializer = value; }

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline void SetSerializer(Aws::String&& value) { m_serializerHasBeenSet = true; m_serializer = std::move(value); }

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline void SetSerializer(const char* value) { m_serializerHasBeenSet = true; m_serializer.assign(value); }

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithSerializer(const Aws::String& value) { SetSerializer(value); return *this;}

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithSerializer(Aws::String&& value) { SetSerializer(std::move(value)); return *this;}

    /**
     * <p>If non-null, the gathered results are returned in a serialized response
     * message in the format specified by this parameter. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for more information.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithSerializer(const char* value) { SetSerializer(value); return *this;}


    /**
     * <p>If this flag is set to <code>TRUE</code>, the results include a detailed
     * report of all index operations that took place during query execution and
     * serialization.</p>
     */
    inline bool GetIndexOps() const{ return m_indexOps; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the results include a detailed
     * report of all index operations that took place during query execution and
     * serialization.</p>
     */
    inline bool IndexOpsHasBeenSet() const { return m_indexOpsHasBeenSet; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the results include a detailed
     * report of all index operations that took place during query execution and
     * serialization.</p>
     */
    inline void SetIndexOps(bool value) { m_indexOpsHasBeenSet = true; m_indexOps = value; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, the results include a detailed
     * report of all index operations that took place during query execution and
     * serialization.</p>
     */
    inline ExecuteGremlinProfileQueryRequest& WithIndexOps(bool value) { SetIndexOps(value); return *this;}

  private:

    Aws::String m_gremlinQuery;
    bool m_gremlinQueryHasBeenSet = false;

    bool m_results;
    bool m_resultsHasBeenSet = false;

    int m_chop;
    bool m_chopHasBeenSet = false;

    Aws::String m_serializer;
    bool m_serializerHasBeenSet = false;

    bool m_indexOps;
    bool m_indexOpsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
