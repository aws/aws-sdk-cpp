/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UnprocessedStandardsControlAssociationUpdate.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchUpdateStandardsControlAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult();
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline const Aws::Vector<UnprocessedStandardsControlAssociationUpdate>& GetUnprocessedAssociationUpdates() const{ return m_unprocessedAssociationUpdates; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline void SetUnprocessedAssociationUpdates(const Aws::Vector<UnprocessedStandardsControlAssociationUpdate>& value) { m_unprocessedAssociationUpdates = value; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline void SetUnprocessedAssociationUpdates(Aws::Vector<UnprocessedStandardsControlAssociationUpdate>&& value) { m_unprocessedAssociationUpdates = std::move(value); }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline BatchUpdateStandardsControlAssociationsResult& WithUnprocessedAssociationUpdates(const Aws::Vector<UnprocessedStandardsControlAssociationUpdate>& value) { SetUnprocessedAssociationUpdates(value); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline BatchUpdateStandardsControlAssociationsResult& WithUnprocessedAssociationUpdates(Aws::Vector<UnprocessedStandardsControlAssociationUpdate>&& value) { SetUnprocessedAssociationUpdates(std::move(value)); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline BatchUpdateStandardsControlAssociationsResult& AddUnprocessedAssociationUpdates(const UnprocessedStandardsControlAssociationUpdate& value) { m_unprocessedAssociationUpdates.push_back(value); return *this; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline BatchUpdateStandardsControlAssociationsResult& AddUnprocessedAssociationUpdates(UnprocessedStandardsControlAssociationUpdate&& value) { m_unprocessedAssociationUpdates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchUpdateStandardsControlAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchUpdateStandardsControlAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchUpdateStandardsControlAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UnprocessedStandardsControlAssociationUpdate> m_unprocessedAssociationUpdates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
