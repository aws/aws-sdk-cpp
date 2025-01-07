/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/SolutionStatus.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Specifies minimal information for the solution offered to solve the
   * customer's business problem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SolutionBase">AWS
   * API Reference</a></p>
   */
  class SolutionBase
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SolutionBase();
    AWS_PARTNERCENTRALSELLING_API SolutionBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SolutionBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The SolutionBase structure provides essential information about a solution.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SolutionBase& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SolutionBase& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SolutionBase& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog in which the solution is hosted, either
     * <code>AWS</code> or <code>Sandbox</code>. This helps partners differentiate
     * between live solutions and those in testing environments.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline SolutionBase& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline SolutionBase& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline SolutionBase& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the solution category, which helps to categorize and organize the
     * solutions partners offer. Valid values: <code>Software Product</code> |
     * <code>Consulting Service</code> | <code>Hardware Product</code> |
     * <code>Communications Product</code> | <code>Professional Service</code> |
     * <code>Managed Service</code> | <code>Value-Added Resale Amazon Web Services
     * Service</code> | <code>Distribution Service</code> | <code>Training
     * Service</code> | <code>Merger and Acquisition Advising Service</code>.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline SolutionBase& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline SolutionBase& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline SolutionBase& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the solution creation date. This is useful to track and audit.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline SolutionBase& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline SolutionBase& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the association of solutions (offerings) to opportunities.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SolutionBase& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SolutionBase& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SolutionBase& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the solution name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SolutionBase& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SolutionBase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SolutionBase& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the solution's current status, which indicates its state in the
     * system. Valid values: <code>Active</code> | <code>Inactive</code> |
     * <code>Draft</code>. The status helps partners and Amazon Web Services track the
     * solution's lifecycle and availability. Filter for <code>Active</code> solutions
     * for association to an opportunity.</p>
     */
    inline const SolutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SolutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SolutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SolutionBase& WithStatus(const SolutionStatus& value) { SetStatus(value); return *this;}
    inline SolutionBase& WithStatus(SolutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SolutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
