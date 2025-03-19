/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>DescribeSMBFileSharesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBFileSharesInput">AWS
   * API Reference</a></p>
   */
  class DescribeSMBFileSharesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSMBFileShares"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileShareARNList() const { return m_fileShareARNList; }
    inline bool FileShareARNListHasBeenSet() const { return m_fileShareARNListHasBeenSet; }
    template<typename FileShareARNListT = Aws::Vector<Aws::String>>
    void SetFileShareARNList(FileShareARNListT&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = std::forward<FileShareARNListT>(value); }
    template<typename FileShareARNListT = Aws::Vector<Aws::String>>
    DescribeSMBFileSharesRequest& WithFileShareARNList(FileShareARNListT&& value) { SetFileShareARNList(std::forward<FileShareARNListT>(value)); return *this;}
    template<typename FileShareARNListT = Aws::String>
    DescribeSMBFileSharesRequest& AddFileShareARNList(FileShareARNListT&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.emplace_back(std::forward<FileShareARNListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_fileShareARNList;
    bool m_fileShareARNListHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
