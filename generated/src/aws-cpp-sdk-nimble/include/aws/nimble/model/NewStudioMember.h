/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StudioPersona.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A new studio user's membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/NewStudioMember">AWS
   * API Reference</a></p>
   */
  class NewStudioMember
  {
  public:
    AWS_NIMBLESTUDIO_API NewStudioMember();
    AWS_NIMBLESTUDIO_API NewStudioMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API NewStudioMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The persona.</p>
     */
    inline const StudioPersona& GetPersona() const{ return m_persona; }
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }
    inline void SetPersona(const StudioPersona& value) { m_personaHasBeenSet = true; m_persona = value; }
    inline void SetPersona(StudioPersona&& value) { m_personaHasBeenSet = true; m_persona = std::move(value); }
    inline NewStudioMember& WithPersona(const StudioPersona& value) { SetPersona(value); return *this;}
    inline NewStudioMember& WithPersona(StudioPersona&& value) { SetPersona(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline NewStudioMember& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline NewStudioMember& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline NewStudioMember& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}
  private:

    StudioPersona m_persona;
    bool m_personaHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
