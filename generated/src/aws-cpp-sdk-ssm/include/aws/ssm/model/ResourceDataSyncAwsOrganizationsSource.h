/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ResourceDataSyncOrganizationalUnit.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the <code>AwsOrganizationsSource</code> resource data sync
   * source. A sync source of this type can synchronize data from Organizations or,
   * if an Amazon Web Services organization isn't present, from multiple Amazon Web
   * Services Regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncAwsOrganizationsSource">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncAwsOrganizationsSource
  {
  public:
    AWS_SSM_API ResourceDataSyncAwsOrganizationsSource();
    AWS_SSM_API ResourceDataSyncAwsOrganizationsSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncAwsOrganizationsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline const Aws::String& GetOrganizationSourceType() const{ return m_organizationSourceType; }

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline bool OrganizationSourceTypeHasBeenSet() const { return m_organizationSourceTypeHasBeenSet; }

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline void SetOrganizationSourceType(const Aws::String& value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType = value; }

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline void SetOrganizationSourceType(Aws::String&& value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType = std::move(value); }

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline void SetOrganizationSourceType(const char* value) { m_organizationSourceTypeHasBeenSet = true; m_organizationSourceType.assign(value); }

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(const Aws::String& value) { SetOrganizationSourceType(value); return *this;}

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(Aws::String&& value) { SetOrganizationSourceType(std::move(value)); return *this;}

    /**
     * <p>If an Amazon Web Services organization is present, this is either
     * <code>OrganizationalUnits</code> or <code>EntireOrganization</code>. For
     * <code>OrganizationalUnits</code>, the data is aggregated from a set of
     * organization units. For <code>EntireOrganization</code>, the data is aggregated
     * from the entire Amazon Web Services organization.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationSourceType(const char* value) { SetOrganizationSourceType(value); return *this;}


    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline const Aws::Vector<ResourceDataSyncOrganizationalUnit>& GetOrganizationalUnits() const{ return m_organizationalUnits; }

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline void SetOrganizationalUnits(const Aws::Vector<ResourceDataSyncOrganizationalUnit>& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = value; }

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline void SetOrganizationalUnits(Aws::Vector<ResourceDataSyncOrganizationalUnit>&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::move(value); }

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationalUnits(const Aws::Vector<ResourceDataSyncOrganizationalUnit>& value) { SetOrganizationalUnits(value); return *this;}

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& WithOrganizationalUnits(Aws::Vector<ResourceDataSyncOrganizationalUnit>&& value) { SetOrganizationalUnits(std::move(value)); return *this;}

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& AddOrganizationalUnits(const ResourceDataSyncOrganizationalUnit& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(value); return *this; }

    /**
     * <p>The Organizations organization units included in the sync.</p>
     */
    inline ResourceDataSyncAwsOrganizationsSource& AddOrganizationalUnits(ResourceDataSyncOrganizationalUnit&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_organizationSourceType;
    bool m_organizationSourceTypeHasBeenSet = false;

    Aws::Vector<ResourceDataSyncOrganizationalUnit> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
