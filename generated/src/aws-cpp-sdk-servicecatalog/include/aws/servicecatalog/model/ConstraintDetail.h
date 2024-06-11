/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a constraint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ConstraintDetail">AWS
   * API Reference</a></p>
   */
  class ConstraintDetail
  {
  public:
    AWS_SERVICECATALOG_API ConstraintDetail();
    AWS_SERVICECATALOG_API ConstraintDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ConstraintDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the constraint.</p>
     */
    inline const Aws::String& GetConstraintId() const{ return m_constraintId; }
    inline bool ConstraintIdHasBeenSet() const { return m_constraintIdHasBeenSet; }
    inline void SetConstraintId(const Aws::String& value) { m_constraintIdHasBeenSet = true; m_constraintId = value; }
    inline void SetConstraintId(Aws::String&& value) { m_constraintIdHasBeenSet = true; m_constraintId = std::move(value); }
    inline void SetConstraintId(const char* value) { m_constraintIdHasBeenSet = true; m_constraintId.assign(value); }
    inline ConstraintDetail& WithConstraintId(const Aws::String& value) { SetConstraintId(value); return *this;}
    inline ConstraintDetail& WithConstraintId(Aws::String&& value) { SetConstraintId(std::move(value)); return *this;}
    inline ConstraintDetail& WithConstraintId(const char* value) { SetConstraintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConstraintDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConstraintDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConstraintDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConstraintDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConstraintDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConstraintDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the constraint.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ConstraintDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ConstraintDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ConstraintDetail& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the product the constraint applies to. Note that a
     * constraint applies to a specific instance of a product within a certain
     * portfolio.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ConstraintDetail& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ConstraintDetail& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ConstraintDetail& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the portfolio the product resides in. The constraint
     * applies only to the instance of the product that lives within this
     * portfolio.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }
    inline ConstraintDetail& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline ConstraintDetail& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline ConstraintDetail& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}
  private:

    Aws::String m_constraintId;
    bool m_constraintIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
