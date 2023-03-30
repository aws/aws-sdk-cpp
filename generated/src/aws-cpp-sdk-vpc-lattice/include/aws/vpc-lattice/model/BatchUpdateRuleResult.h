/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleUpdateSuccess.h>
#include <aws/vpc-lattice/model/RuleUpdateFailure.h>
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
namespace VPCLattice
{
namespace Model
{
  class BatchUpdateRuleResult
  {
  public:
    AWS_VPCLATTICE_API BatchUpdateRuleResult();
    AWS_VPCLATTICE_API BatchUpdateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API BatchUpdateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline const Aws::Vector<RuleUpdateSuccess>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline void SetSuccessful(const Aws::Vector<RuleUpdateSuccess>& value) { m_successful = value; }

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline void SetSuccessful(Aws::Vector<RuleUpdateSuccess>&& value) { m_successful = std::move(value); }

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline BatchUpdateRuleResult& WithSuccessful(const Aws::Vector<RuleUpdateSuccess>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline BatchUpdateRuleResult& WithSuccessful(Aws::Vector<RuleUpdateSuccess>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline BatchUpdateRuleResult& AddSuccessful(const RuleUpdateSuccess& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline BatchUpdateRuleResult& AddSuccessful(RuleUpdateSuccess&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline const Aws::Vector<RuleUpdateFailure>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<RuleUpdateFailure>& value) { m_unsuccessful = value; }

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<RuleUpdateFailure>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline BatchUpdateRuleResult& WithUnsuccessful(const Aws::Vector<RuleUpdateFailure>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline BatchUpdateRuleResult& WithUnsuccessful(Aws::Vector<RuleUpdateFailure>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline BatchUpdateRuleResult& AddUnsuccessful(const RuleUpdateFailure& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline BatchUpdateRuleResult& AddUnsuccessful(RuleUpdateFailure&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchUpdateRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchUpdateRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchUpdateRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RuleUpdateSuccess> m_successful;

    Aws::Vector<RuleUpdateFailure> m_unsuccessful;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
