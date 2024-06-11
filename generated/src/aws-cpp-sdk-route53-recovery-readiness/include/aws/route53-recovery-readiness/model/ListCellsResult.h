﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/CellOutput.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListCellsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListCellsResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListCellsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListCellsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cells.</p>
     */
    inline const Aws::Vector<CellOutput>& GetCells() const{ return m_cells; }
    inline void SetCells(const Aws::Vector<CellOutput>& value) { m_cells = value; }
    inline void SetCells(Aws::Vector<CellOutput>&& value) { m_cells = std::move(value); }
    inline ListCellsResult& WithCells(const Aws::Vector<CellOutput>& value) { SetCells(value); return *this;}
    inline ListCellsResult& WithCells(Aws::Vector<CellOutput>&& value) { SetCells(std::move(value)); return *this;}
    inline ListCellsResult& AddCells(const CellOutput& value) { m_cells.push_back(value); return *this; }
    inline ListCellsResult& AddCells(CellOutput&& value) { m_cells.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCellsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCellsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCellsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCellsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCellsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCellsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CellOutput> m_cells;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
