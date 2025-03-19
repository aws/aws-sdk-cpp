/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/DeletedObject.h>
#include <aws/s3/model/Error.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class DeleteObjectsResult
  {
  public:
    AWS_S3_API DeleteObjectsResult() = default;
    AWS_S3_API DeleteObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API DeleteObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Container element for a successful delete. It identifies the object that was
     * successfully deleted.</p>
     */
    inline const Aws::Vector<DeletedObject>& GetDeleted() const { return m_deleted; }
    template<typename DeletedT = Aws::Vector<DeletedObject>>
    void SetDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted = std::forward<DeletedT>(value); }
    template<typename DeletedT = Aws::Vector<DeletedObject>>
    DeleteObjectsResult& WithDeleted(DeletedT&& value) { SetDeleted(std::forward<DeletedT>(value)); return *this;}
    template<typename DeletedT = DeletedObject>
    DeleteObjectsResult& AddDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted.emplace_back(std::forward<DeletedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline DeleteObjectsResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for a failed delete action that describes the object that Amazon S3
     * attempted to delete and the error it encountered.</p>
     */
    inline const Aws::Vector<Error>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<Error>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<Error>>
    DeleteObjectsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = Error>
    DeleteObjectsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteObjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeletedObject> m_deleted;
    bool m_deletedHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::Vector<Error> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
