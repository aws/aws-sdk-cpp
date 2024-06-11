/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more association documents on the managed node. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociation">AWS
   * API Reference</a></p>
   */
  class InstanceAssociation
  {
  public:
    AWS_SSM_API InstanceAssociation();
    AWS_SSM_API InstanceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline InstanceAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline InstanceAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline InstanceAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceAssociation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceAssociation& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceAssociation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the association document for the managed nodes.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline InstanceAssociation& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline InstanceAssociation& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline InstanceAssociation& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information for the association on the managed node.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }
    inline InstanceAssociation& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}
    inline InstanceAssociation& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}
    inline InstanceAssociation& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
