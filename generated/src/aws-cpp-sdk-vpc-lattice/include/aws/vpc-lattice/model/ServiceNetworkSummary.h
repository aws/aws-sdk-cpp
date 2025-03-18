/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about a service network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ServiceNetworkSummary">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkSummary
  {
  public:
    AWS_VPCLATTICE_API ServiceNetworkSummary() = default;
    AWS_VPCLATTICE_API ServiceNetworkSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceNetworkSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service network was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceNetworkSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ServiceNetworkSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the service network was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ServiceNetworkSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceNetworkSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resource configurations associated with a service network.</p>
     */
    inline long long GetNumberOfAssociatedResourceConfigurations() const { return m_numberOfAssociatedResourceConfigurations; }
    inline bool NumberOfAssociatedResourceConfigurationsHasBeenSet() const { return m_numberOfAssociatedResourceConfigurationsHasBeenSet; }
    inline void SetNumberOfAssociatedResourceConfigurations(long long value) { m_numberOfAssociatedResourceConfigurationsHasBeenSet = true; m_numberOfAssociatedResourceConfigurations = value; }
    inline ServiceNetworkSummary& WithNumberOfAssociatedResourceConfigurations(long long value) { SetNumberOfAssociatedResourceConfigurations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services associated with the service network.</p>
     */
    inline long long GetNumberOfAssociatedServices() const { return m_numberOfAssociatedServices; }
    inline bool NumberOfAssociatedServicesHasBeenSet() const { return m_numberOfAssociatedServicesHasBeenSet; }
    inline void SetNumberOfAssociatedServices(long long value) { m_numberOfAssociatedServicesHasBeenSet = true; m_numberOfAssociatedServices = value; }
    inline ServiceNetworkSummary& WithNumberOfAssociatedServices(long long value) { SetNumberOfAssociatedServices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of VPCs associated with the service network.</p>
     */
    inline long long GetNumberOfAssociatedVPCs() const { return m_numberOfAssociatedVPCs; }
    inline bool NumberOfAssociatedVPCsHasBeenSet() const { return m_numberOfAssociatedVPCsHasBeenSet; }
    inline void SetNumberOfAssociatedVPCs(long long value) { m_numberOfAssociatedVPCsHasBeenSet = true; m_numberOfAssociatedVPCs = value; }
    inline ServiceNetworkSummary& WithNumberOfAssociatedVPCs(long long value) { SetNumberOfAssociatedVPCs(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_numberOfAssociatedResourceConfigurations{0};
    bool m_numberOfAssociatedResourceConfigurationsHasBeenSet = false;

    long long m_numberOfAssociatedServices{0};
    bool m_numberOfAssociatedServicesHasBeenSet = false;

    long long m_numberOfAssociatedVPCs{0};
    bool m_numberOfAssociatedVPCsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
