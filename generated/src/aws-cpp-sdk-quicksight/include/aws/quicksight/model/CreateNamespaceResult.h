/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/quicksight/model/IdentityStore.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateNamespaceResult
  {
  public:
    AWS_QUICKSIGHT_API CreateNamespaceResult() = default;
    AWS_QUICKSIGHT_API CreateNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the QuickSight namespace you created. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateNamespaceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new namespace that you created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNamespaceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region; that you want to use for the free SPICE
     * capacity for the new namespace. This is set to the region that you run
     * CreateNamespace in. </p>
     */
    inline const Aws::String& GetCapacityRegion() const { return m_capacityRegion; }
    template<typename CapacityRegionT = Aws::String>
    void SetCapacityRegion(CapacityRegionT&& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = std::forward<CapacityRegionT>(value); }
    template<typename CapacityRegionT = Aws::String>
    CreateNamespaceResult& WithCapacityRegion(CapacityRegionT&& value) { SetCapacityRegion(std::forward<CapacityRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the creation of the namespace. This is an asynchronous process.
     * A status of <code>CREATED</code> means that your namespace is ready to use. If
     * an error occurs, it indicates if the process is <code>retryable</code> or
     * <code>non-retryable</code>. In the case of a non-retryable error, refer to the
     * error message for follow-up tasks.</p>
     */
    inline NamespaceStatus GetCreationStatus() const { return m_creationStatus; }
    inline void SetCreationStatus(NamespaceStatus value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }
    inline CreateNamespaceResult& WithCreationStatus(NamespaceStatus value) { SetCreationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline IdentityStore GetIdentityStore() const { return m_identityStore; }
    inline void SetIdentityStore(IdentityStore value) { m_identityStoreHasBeenSet = true; m_identityStore = value; }
    inline CreateNamespaceResult& WithIdentityStore(IdentityStore value) { SetIdentityStore(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateNamespaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateNamespaceResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_capacityRegion;
    bool m_capacityRegionHasBeenSet = false;

    NamespaceStatus m_creationStatus{NamespaceStatus::NOT_SET};
    bool m_creationStatusHasBeenSet = false;

    IdentityStore m_identityStore{IdentityStore::NOT_SET};
    bool m_identityStoreHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
