/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for GetDataLakeDataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataLakeDatasetRequest">AWS
   * API Reference</a></p>
   */
  class GetDataLakeDatasetRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataLakeDataset"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetDataLakeDatasetRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the dataset, besides the custom defined namespace, every
     * instance comes with below pre-defined namespaces:</p> <ul> <li> <p> <b>asc</b> -
     * For information on the Amazon Web Services Supply Chain supported datasets see
     * <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html</a>.</p>
     * </li> <li> <p> <b>default</b> - For datasets with custom user-defined
     * schemas.</p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetDataLakeDatasetRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset. For <b>asc</b> namespace, the name must be one of
     * the supported data entities under <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDataLakeDatasetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
