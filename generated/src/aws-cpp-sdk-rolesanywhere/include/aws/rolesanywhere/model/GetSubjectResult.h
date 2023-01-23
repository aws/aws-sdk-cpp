/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/SubjectDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class GetSubjectResult
  {
  public:
    AWS_ROLESANYWHERE_API GetSubjectResult();
    AWS_ROLESANYWHERE_API GetSubjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API GetSubjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the subject after a read or write operation.</p>
     */
    inline const SubjectDetail& GetSubject() const{ return m_subject; }

    /**
     * <p>The state of the subject after a read or write operation.</p>
     */
    inline void SetSubject(const SubjectDetail& value) { m_subject = value; }

    /**
     * <p>The state of the subject after a read or write operation.</p>
     */
    inline void SetSubject(SubjectDetail&& value) { m_subject = std::move(value); }

    /**
     * <p>The state of the subject after a read or write operation.</p>
     */
    inline GetSubjectResult& WithSubject(const SubjectDetail& value) { SetSubject(value); return *this;}

    /**
     * <p>The state of the subject after a read or write operation.</p>
     */
    inline GetSubjectResult& WithSubject(SubjectDetail&& value) { SetSubject(std::move(value)); return *this;}

  private:

    SubjectDetail m_subject;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
