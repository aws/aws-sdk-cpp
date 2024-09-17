/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/ssm/model/PatchProperty.h>
#include <aws/ssm/model/PatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribePatchPropertiesRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribePatchPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePatchProperties"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The operating system type for which to list patches.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline DescribePatchPropertiesRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline DescribePatchPropertiesRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch property for which you want to view patch details. </p>
     */
    inline const PatchProperty& GetProperty() const{ return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    inline void SetProperty(const PatchProperty& value) { m_propertyHasBeenSet = true; m_property = value; }
    inline void SetProperty(PatchProperty&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }
    inline DescribePatchPropertiesRequest& WithProperty(const PatchProperty& value) { SetProperty(value); return *this;}
    inline DescribePatchPropertiesRequest& WithProperty(PatchProperty&& value) { SetProperty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to list patches for the Windows operating system or for
     * applications released by Microsoft. Not applicable for the Linux or macOS
     * operating systems.</p>
     */
    inline const PatchSet& GetPatchSet() const{ return m_patchSet; }
    inline bool PatchSetHasBeenSet() const { return m_patchSetHasBeenSet; }
    inline void SetPatchSet(const PatchSet& value) { m_patchSetHasBeenSet = true; m_patchSet = value; }
    inline void SetPatchSet(PatchSet&& value) { m_patchSetHasBeenSet = true; m_patchSet = std::move(value); }
    inline DescribePatchPropertiesRequest& WithPatchSet(const PatchSet& value) { SetPatchSet(value); return *this;}
    inline DescribePatchPropertiesRequest& WithPatchSet(PatchSet&& value) { SetPatchSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribePatchPropertiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribePatchPropertiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePatchPropertiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePatchPropertiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    PatchProperty m_property;
    bool m_propertyHasBeenSet = false;

    PatchSet m_patchSet;
    bool m_patchSetHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
