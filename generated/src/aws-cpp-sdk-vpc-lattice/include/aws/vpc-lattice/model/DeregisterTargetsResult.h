/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/Target.h>
#include <aws/vpc-lattice/model/TargetFailure.h>
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
  class DeregisterTargetsResult
  {
  public:
    AWS_VPCLATTICE_API DeregisterTargetsResult();
    AWS_VPCLATTICE_API DeregisterTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeregisterTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline const Aws::Vector<Target>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline void SetSuccessful(const Aws::Vector<Target>& value) { m_successful = value; }

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline void SetSuccessful(Aws::Vector<Target>&& value) { m_successful = std::move(value); }

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline DeregisterTargetsResult& WithSuccessful(const Aws::Vector<Target>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline DeregisterTargetsResult& WithSuccessful(Aws::Vector<Target>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline DeregisterTargetsResult& AddSuccessful(const Target& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline DeregisterTargetsResult& AddSuccessful(Target&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline const Aws::Vector<TargetFailure>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<TargetFailure>& value) { m_unsuccessful = value; }

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<TargetFailure>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline DeregisterTargetsResult& WithUnsuccessful(const Aws::Vector<TargetFailure>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline DeregisterTargetsResult& WithUnsuccessful(Aws::Vector<TargetFailure>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline DeregisterTargetsResult& AddUnsuccessful(const TargetFailure& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline DeregisterTargetsResult& AddUnsuccessful(TargetFailure&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeregisterTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeregisterTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeregisterTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Target> m_successful;

    Aws::Vector<TargetFailure> m_unsuccessful;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
