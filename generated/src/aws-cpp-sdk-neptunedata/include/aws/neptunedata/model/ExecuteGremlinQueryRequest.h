﻿/**
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
  class ExecuteGremlinQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteGremlinQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteGremlinQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Using this API, you can run Gremlin queries in string format much as you can
     * using the HTTP endpoint. The interface is compatible with whatever Gremlin
     * version your DB cluster is using (see the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/access-graph-gremlin-client.html#best-practices-gremlin-java-latest">Tinkerpop
     * client section</a> to determine which Gremlin releases your engine version
     * supports).</p>
     */
    inline const Aws::String& GetGremlinQuery() const { return m_gremlinQuery; }
    inline bool GremlinQueryHasBeenSet() const { return m_gremlinQueryHasBeenSet; }
    template<typename GremlinQueryT = Aws::String>
    void SetGremlinQuery(GremlinQueryT&& value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery = std::forward<GremlinQueryT>(value); }
    template<typename GremlinQueryT = Aws::String>
    ExecuteGremlinQueryRequest& WithGremlinQuery(GremlinQueryT&& value) { SetGremlinQuery(std::forward<GremlinQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If non-null, the query results are returned in a serialized response message
     * in the format specified by this parameter. See the <a
     * href="https://tinkerpop.apache.org/docs/current/reference/#_graphson">GraphSON</a>
     * section in the TinkerPop documentation for a list of the formats that are
     * currently supported.</p>
     */
    inline const Aws::String& GetSerializer() const { return m_serializer; }
    inline bool SerializerHasBeenSet() const { return m_serializerHasBeenSet; }
    template<typename SerializerT = Aws::String>
    void SetSerializer(SerializerT&& value) { m_serializerHasBeenSet = true; m_serializer = std::forward<SerializerT>(value); }
    template<typename SerializerT = Aws::String>
    ExecuteGremlinQueryRequest& WithSerializer(SerializerT&& value) { SetSerializer(std::forward<SerializerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gremlinQuery;
    bool m_gremlinQueryHasBeenSet = false;

    Aws::String m_serializer;
    bool m_serializerHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
