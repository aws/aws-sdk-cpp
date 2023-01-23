/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailTemplateMetadata.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListEmailTemplatesResult
  {
  public:
    AWS_SESV2_API ListEmailTemplatesResult();
    AWS_SESV2_API ListEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline const Aws::Vector<EmailTemplateMetadata>& GetTemplatesMetadata() const{ return m_templatesMetadata; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetTemplatesMetadata(const Aws::Vector<EmailTemplateMetadata>& value) { m_templatesMetadata = value; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline void SetTemplatesMetadata(Aws::Vector<EmailTemplateMetadata>&& value) { m_templatesMetadata = std::move(value); }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListEmailTemplatesResult& WithTemplatesMetadata(const Aws::Vector<EmailTemplateMetadata>& value) { SetTemplatesMetadata(value); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListEmailTemplatesResult& WithTemplatesMetadata(Aws::Vector<EmailTemplateMetadata>&& value) { SetTemplatesMetadata(std::move(value)); return *this;}

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListEmailTemplatesResult& AddTemplatesMetadata(const EmailTemplateMetadata& value) { m_templatesMetadata.push_back(value); return *this; }

    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline ListEmailTemplatesResult& AddTemplatesMetadata(EmailTemplateMetadata&& value) { m_templatesMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline ListEmailTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline ListEmailTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline ListEmailTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EmailTemplateMetadata> m_templatesMetadata;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
