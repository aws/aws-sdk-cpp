/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ManagedAccount.h>
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
namespace mgn
{
namespace Model
{
  /**
   * <p>List managed accounts response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListManagedAccountsResponse">AWS
   * API Reference</a></p>
   */
  class ListManagedAccountsResult
  {
  public:
    AWS_MGN_API ListManagedAccountsResult();
    AWS_MGN_API ListManagedAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListManagedAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List managed accounts response items.</p>
     */
    inline const Aws::Vector<ManagedAccount>& GetItems() const{ return m_items; }

    /**
     * <p>List managed accounts response items.</p>
     */
    inline void SetItems(const Aws::Vector<ManagedAccount>& value) { m_items = value; }

    /**
     * <p>List managed accounts response items.</p>
     */
    inline void SetItems(Aws::Vector<ManagedAccount>&& value) { m_items = std::move(value); }

    /**
     * <p>List managed accounts response items.</p>
     */
    inline ListManagedAccountsResult& WithItems(const Aws::Vector<ManagedAccount>& value) { SetItems(value); return *this;}

    /**
     * <p>List managed accounts response items.</p>
     */
    inline ListManagedAccountsResult& WithItems(Aws::Vector<ManagedAccount>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List managed accounts response items.</p>
     */
    inline ListManagedAccountsResult& AddItems(const ManagedAccount& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List managed accounts response items.</p>
     */
    inline ListManagedAccountsResult& AddItems(ManagedAccount&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>List managed accounts response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline ListManagedAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline ListManagedAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List managed accounts response next token.</p>
     */
    inline ListManagedAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListManagedAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListManagedAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListManagedAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ManagedAccount> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
