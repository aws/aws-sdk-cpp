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
  class ExecuteGremlinExplainQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteGremlinExplainQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteGremlinExplainQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Gremlin explain query string.</p>
     */
    inline const Aws::String& GetGremlinQuery() const{ return m_gremlinQuery; }
    inline bool GremlinQueryHasBeenSet() const { return m_gremlinQueryHasBeenSet; }
    inline void SetGremlinQuery(const Aws::String& value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery = value; }
    inline void SetGremlinQuery(Aws::String&& value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery = std::move(value); }
    inline void SetGremlinQuery(const char* value) { m_gremlinQueryHasBeenSet = true; m_gremlinQuery.assign(value); }
    inline ExecuteGremlinExplainQueryRequest& WithGremlinQuery(const Aws::String& value) { SetGremlinQuery(value); return *this;}
    inline ExecuteGremlinExplainQueryRequest& WithGremlinQuery(Aws::String&& value) { SetGremlinQuery(std::move(value)); return *this;}
    inline ExecuteGremlinExplainQueryRequest& WithGremlinQuery(const char* value) { SetGremlinQuery(value); return *this;}
    ///@}
  private:

    Aws::String m_gremlinQuery;
    bool m_gremlinQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
