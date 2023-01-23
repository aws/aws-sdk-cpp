/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteOptionGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteOptionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOptionGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to be deleted.</p>  <p>You can't delete
     * default option groups.</p> 
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
