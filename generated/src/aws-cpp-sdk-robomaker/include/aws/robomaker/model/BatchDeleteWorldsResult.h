/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RoboMaker
{
namespace Model
{
  class BatchDeleteWorldsResult
  {
  public:
    AWS_ROBOMAKER_API BatchDeleteWorldsResult();
    AWS_ROBOMAKER_API BatchDeleteWorldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API BatchDeleteWorldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedWorlds() const{ return m_unprocessedWorlds; }

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline void SetUnprocessedWorlds(const Aws::Vector<Aws::String>& value) { m_unprocessedWorlds = value; }

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline void SetUnprocessedWorlds(Aws::Vector<Aws::String>&& value) { m_unprocessedWorlds = std::move(value); }

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline BatchDeleteWorldsResult& WithUnprocessedWorlds(const Aws::Vector<Aws::String>& value) { SetUnprocessedWorlds(value); return *this;}

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline BatchDeleteWorldsResult& WithUnprocessedWorlds(Aws::Vector<Aws::String>&& value) { SetUnprocessedWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline BatchDeleteWorldsResult& AddUnprocessedWorlds(const Aws::String& value) { m_unprocessedWorlds.push_back(value); return *this; }

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline BatchDeleteWorldsResult& AddUnprocessedWorlds(Aws::String&& value) { m_unprocessedWorlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline BatchDeleteWorldsResult& AddUnprocessedWorlds(const char* value) { m_unprocessedWorlds.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeleteWorldsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeleteWorldsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeleteWorldsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_unprocessedWorlds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
