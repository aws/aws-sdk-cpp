﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
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
namespace SavingsPlans
{
namespace Model
{
  class CreateSavingsPlanResult
  {
  public:
    AWS_SAVINGSPLANS_API CreateSavingsPlanResult();
    AWS_SAVINGSPLANS_API CreateSavingsPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API CreateSavingsPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const{ return m_savingsPlanId; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const Aws::String& value) { m_savingsPlanId = value; }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(Aws::String&& value) { m_savingsPlanId = std::move(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline void SetSavingsPlanId(const char* value) { m_savingsPlanId.assign(value); }

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline CreateSavingsPlanResult& WithSavingsPlanId(const Aws::String& value) { SetSavingsPlanId(value); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline CreateSavingsPlanResult& WithSavingsPlanId(Aws::String&& value) { SetSavingsPlanId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline CreateSavingsPlanResult& WithSavingsPlanId(const char* value) { SetSavingsPlanId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSavingsPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSavingsPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSavingsPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_savingsPlanId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
