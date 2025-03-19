/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/InsightImpactGraphEdge.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about an application that processed requests, users that made
   * requests, or downstream services, resources, and applications that an
   * application used. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightImpactGraphService">AWS
   * API Reference</a></p>
   */
  class InsightImpactGraphService
  {
  public:
    AWS_XRAY_API InsightImpactGraphService() = default;
    AWS_XRAY_API InsightImpactGraphService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightImpactGraphService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline int GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline InsightImpactGraphService& WithReferenceId(int value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    InsightImpactGraphService& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical name of the service.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InsightImpactGraphService& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    InsightImpactGraphService& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    InsightImpactGraphService& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InsightImpactGraphService& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connections to downstream services.</p>
     */
    inline const Aws::Vector<InsightImpactGraphEdge>& GetEdges() const { return m_edges; }
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
    template<typename EdgesT = Aws::Vector<InsightImpactGraphEdge>>
    void SetEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges = std::forward<EdgesT>(value); }
    template<typename EdgesT = Aws::Vector<InsightImpactGraphEdge>>
    InsightImpactGraphService& WithEdges(EdgesT&& value) { SetEdges(std::forward<EdgesT>(value)); return *this;}
    template<typename EdgesT = InsightImpactGraphEdge>
    InsightImpactGraphService& AddEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges.emplace_back(std::forward<EdgesT>(value)); return *this; }
    ///@}
  private:

    int m_referenceId{0};
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<InsightImpactGraphEdge> m_edges;
    bool m_edgesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
