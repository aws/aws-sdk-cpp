/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationDescription.h>
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
  class UpdateAssociationStatusResult
  {
  public:
    AWS_SSM_API UpdateAssociationStatusResult();
    AWS_SSM_API UpdateAssociationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateAssociationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationDescription& GetAssociationDescription() const{ return m_associationDescription; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationDescription(const AssociationDescription& value) { m_associationDescription = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationDescription(AssociationDescription&& value) { m_associationDescription = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline UpdateAssociationStatusResult& WithAssociationDescription(const AssociationDescription& value) { SetAssociationDescription(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline UpdateAssociationStatusResult& WithAssociationDescription(AssociationDescription&& value) { SetAssociationDescription(std::move(value)); return *this;}

  private:

    AssociationDescription m_associationDescription;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
