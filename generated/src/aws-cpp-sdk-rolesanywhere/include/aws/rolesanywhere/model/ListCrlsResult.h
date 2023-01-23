/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/CrlDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class ListCrlsResult
  {
  public:
    AWS_ROLESANYWHERE_API ListCrlsResult();
    AWS_ROLESANYWHERE_API ListCrlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListCrlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline const Aws::Vector<CrlDetail>& GetCrls() const{ return m_crls; }

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline void SetCrls(const Aws::Vector<CrlDetail>& value) { m_crls = value; }

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline void SetCrls(Aws::Vector<CrlDetail>&& value) { m_crls = std::move(value); }

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline ListCrlsResult& WithCrls(const Aws::Vector<CrlDetail>& value) { SetCrls(value); return *this;}

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline ListCrlsResult& WithCrls(Aws::Vector<CrlDetail>&& value) { SetCrls(std::move(value)); return *this;}

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline ListCrlsResult& AddCrls(const CrlDetail& value) { m_crls.push_back(value); return *this; }

    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline ListCrlsResult& AddCrls(CrlDetail&& value) { m_crls.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CrlDetail> m_crls;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
