/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationDescription.h>
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
namespace SSM
{
namespace Model
{
  class UpdateAssociationResult
  {
  public:
    AWS_SSM_API UpdateAssociationResult() = default;
    AWS_SSM_API UpdateAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the association that was updated.</p>
     */
    inline const AssociationDescription& GetAssociationDescription() const { return m_associationDescription; }
    template<typename AssociationDescriptionT = AssociationDescription>
    void SetAssociationDescription(AssociationDescriptionT&& value) { m_associationDescriptionHasBeenSet = true; m_associationDescription = std::forward<AssociationDescriptionT>(value); }
    template<typename AssociationDescriptionT = AssociationDescription>
    UpdateAssociationResult& WithAssociationDescription(AssociationDescriptionT&& value) { SetAssociationDescription(std::forward<AssociationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssociationDescription m_associationDescription;
    bool m_associationDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
