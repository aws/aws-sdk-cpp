/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDefaultVersionDescription.h>
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
  class UpdateDocumentDefaultVersionResult
  {
  public:
    AWS_SSM_API UpdateDocumentDefaultVersionResult();
    AWS_SSM_API UpdateDocumentDefaultVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateDocumentDefaultVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline const DocumentDefaultVersionDescription& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline void SetDescription(const DocumentDefaultVersionDescription& value) { m_description = value; }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline void SetDescription(DocumentDefaultVersionDescription&& value) { m_description = std::move(value); }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline UpdateDocumentDefaultVersionResult& WithDescription(const DocumentDefaultVersionDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline UpdateDocumentDefaultVersionResult& WithDescription(DocumentDefaultVersionDescription&& value) { SetDescription(std::move(value)); return *this;}

  private:

    DocumentDefaultVersionDescription m_description;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
